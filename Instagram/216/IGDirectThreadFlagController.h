//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString, UIBarButtonItem;

@interface IGDirectThreadFlagController : NSObject
{
    NSString *_threadId;
    _Bool _threadIsFlagged;
    IGUserSession *_userSession;
    UIBarButtonItem *_flagBarButtonItem;
}

- (void).cxx_destruct;
- (void)_updateFlagButtonWithFlagged:(_Bool)arg1;
- (void)updateThreadIsFlagged:(_Bool)arg1;
- (void)toggleFlagThread;
- (id)initWithUserSession:(id)arg1 threadId:(id)arg2 threadIsFlagged:(_Bool)arg3 flagButton:(id)arg4 presentingViewController:(id)arg5;

@end

