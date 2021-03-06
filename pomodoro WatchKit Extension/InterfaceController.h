//
//  InterfaceController.h
//  Pomodoro WatchKit Extension
//
//  Created by omer ozkul on 27/11/15.
//  Copyright © 2015 Linkvalue. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>
#import <WatchConnectivity/WatchConnectivity.h>

@interface InterfaceController : WKInterfaceController <WCSessionDelegate>

@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceTimer *timer;

@end
