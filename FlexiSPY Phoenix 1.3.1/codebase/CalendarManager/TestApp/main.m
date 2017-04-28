//
//  main.m
//  TestApp
//
//  Created by Benjawan Tanarattanakorn on 1/17/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalendarEntryHelper.h"

int main(int argc, char *argv[]) {
    
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    //int retVal = UIApplicationMain(argc, argv, nil, nil);
	int retVal = 0;
	CalendarEntryHelper *helper = [[CalendarEntryHelper alloc] init];
	[helper createCalendar];
	[helper release];
	
	//CFRunLoopRun();
    [pool release];
    return retVal;
}
