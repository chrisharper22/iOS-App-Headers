//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARExperimentConfiguration-Protocol.h>

@class IGUserSession, NSString;

@interface FBARInstagramExperimentConfiguration : NSObject <FBARExperimentConfiguration>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (double)doubleForParameter:(int)arg1 withDefault:(double)arg2;
- (id)stringForParameter:(int)arg1 withDefault:(id)arg2;
- (long long)int64ForParameter:(int)arg1 withDefault:(long long)arg2;
- (_Bool)boolWithoutLoggingForParameter:(int)arg1 withDefault:(_Bool)arg2;
- (_Bool)boolForParameter:(int)arg1 withDefault:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
