//
//  ofxtvOSAppDelegate.hpp
//  tvOS+OFLib
//
//  Created by Daniel Rosser on 26/10/2015.
//

#pragma once

#ifndef ofxtvOSAppDelegate_h
#define ofxtvOSAppDelegate_h


#import <UIKit/UIKit.h>

@class ofxtvOSViewController;

@interface ofxtvOSAppDelegate : NSObject <UIApplicationDelegate> {
}

@property (nonatomic, retain) UIWindow * window;
@property (nonatomic, retain) ofxtvOSViewController * glViewController;

- (BOOL)application:(UIApplication*)application
handleOpenURL:(NSURL*)url;


@end

#endif /* ofxtvOSAppDelegate_h */
