//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGUploadTaskStateMachine : NSObject
{
    long long _status;
}

- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)transitToStatus:(long long)arg1;
- (_Bool)canTransitToStatus:(long long)arg1;
- (long long)status;
- (id)init;

@end

