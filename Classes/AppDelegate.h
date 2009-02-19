//
//  AppDelegate.h
//  iPhone Plist Tutorial
//
//  Created by Sam Soffes on 2/18/09.
//  Copyright Sam Soffes 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ViewController *viewController;

@end

