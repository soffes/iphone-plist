//
//  ViewController.m
//  iPhone Plist Tutorial
//
//  Created by Sam Soffes on 2/18/09.
//  Copyright Sam Soffes 2009. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

@synthesize labelOne;
@synthesize labelTwo;
@synthesize labelThree;

- (void)viewDidLoad {
	
	// URL for our plist
	NSURL *plistURL = [NSURL URLWithString:@"http://github.com/samsoffes/iphone-plist/raw/master/HelloWorld.plist"];
	
	// Initialize our dictionary from the plist on the server
	NSDictionary *dictionary = [NSDictionary dictionaryWithContentsOfURL:plistURL];
	
	// Update the view to show that our results
	
	// These two keys are strings in the plist which map to NSString
	labelOne.text = [dictionary objectForKey:@"keyOne"];
	labelTwo.text = [dictionary objectForKey:@"otherCoolKey"];
	
	// Integers are mapped to NSNumbers
	// We need to do string value because this is a NSNumber and the UILabel wants a NSString
	labelThree.text = [[dictionary objectForKey:@"weCanDoIntegersToo"] stringValue];
}

@end
