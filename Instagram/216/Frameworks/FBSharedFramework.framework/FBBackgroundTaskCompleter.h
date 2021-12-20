//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBBackgroundTaskCompleting-Protocol.h>

@class NSString;

@interface FBBackgroundTaskCompleter : NSObject <FBBackgroundTaskCompleting>
{
    CDUnknownBlockType _callback;
    NSString *_name;
    _Bool _didCallBlock;
    _Bool _didExpire;
}

- (void).cxx_destruct;
@property _Bool didExpire; // @synthesize didExpire=_didExpire;
@property _Bool didCallBlock; // @synthesize didCallBlock=_didCallBlock;
- (void)dealloc;
- (void)didCompleteBackgroundTask;
- (id)initWithName:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

