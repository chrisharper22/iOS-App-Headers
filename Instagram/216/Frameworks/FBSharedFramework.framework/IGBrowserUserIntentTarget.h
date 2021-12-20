//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class IGBrowserSession, NSString;

@interface IGBrowserUserIntentTarget : NSObject <FBIntentTarget>
{
    IGBrowserSession *_browserSession;
    long long _preferredStatusBarStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(readonly, nonatomic) IGBrowserSession *browserSession; // @synthesize browserSession=_browserSession;
- (id)initWithBrowserSession:(id)arg1 preferredStatusBarStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

