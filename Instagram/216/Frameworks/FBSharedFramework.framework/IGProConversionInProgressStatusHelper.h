//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBCancelable;

@interface IGProConversionInProgressStatusHelper : NSObject
{
    CDUnknownBlockType _onStatusChangeBlock;
    id <FBCancelable> _timerCancelToken;
}

- (void).cxx_destruct;
- (void)_didUpdateStatusText:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void)requestFinished;
- (void)requestStarted;
- (id)initWithOnStatusChange:(CDUnknownBlockType)arg1;

@end

