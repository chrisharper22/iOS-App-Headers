//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface IGAppServicesAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _addtionalQPLLoggingForServicesIsEnabled;
    NSMutableSet *_loggedEvents;
}

- (void).cxx_destruct;
- (void)recordEventReport:(id)arg1;
- (id)init;
- (id)initWithAddtionalQPLLoggingForServicesIsEnabled:(_Bool)arg1;

@end

