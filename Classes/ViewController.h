//
//  ViewController.h
//  iPhone Plist Tutorial
//
//  Created by Sam Soffes on 2/18/09.
//  Copyright Sam Soffes 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {

	IBOutlet UILabel *labelOne;
	IBOutlet UILabel *labelTwo;
	IBOutlet UILabel *labelThree;
}

@property (nonatomic, retain) IBOutlet UILabel *labelOne;
@property (nonatomic, retain) IBOutlet UILabel *labelTwo;
@property (nonatomic, retain) IBOutlet UILabel *labelThree;

@end
