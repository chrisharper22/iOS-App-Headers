//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFollowPeopleLoggerProtocol-Protocol.h"

@class IGUser, IGUserSession, NSMutableSet, NSString;

@interface IGProfileChainingLogger : NSObject <IGFollowPeopleLoggerProtocol>
{
    NSString *_module;
    NSString *_view;
    NSMutableSet *_set;
    unsigned long long _offset;
    IGUser *_chainingUser;
    NSString *_chainingUserPK;
    NSString *_algorithmOverride;
    long long _similarAccountSource;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) long long similarAccountSource; // @synthesize similarAccountSource=_similarAccountSource;
@property(copy, nonatomic) NSString *algorithmOverride; // @synthesize algorithmOverride=_algorithmOverride;
@property(readonly, copy, nonatomic) NSString *chainingUserPK; // @synthesize chainingUserPK=_chainingUserPK;
@property(readonly, nonatomic) IGUser *chainingUser; // @synthesize chainingUser=_chainingUser;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
- (id)_viewStringForSource:(long long)arg1;
- (void)logUnblockWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDeclineFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logAcceptFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logViewpointImpressionWithUserInfo:(id)arg1;
- (void)logFollowWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logClickWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logImpressionWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (id)initWithModule:(id)arg1 source:(long long)arg2 chainingUser:(id)arg3 userSession:(id)arg4 algorithmOverride:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
