//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGTwoFactorLoginApprovalModel, NSString;

@interface IGTwoFactorLoginApprovalUserIntentTarget : NSObject <FBIntentTarget>
{
    IGTwoFactorLoginApprovalModel *_loginApprovalModel;
    unsigned long long _loginApprovalAction;
    unsigned long long _loginApprovalStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long loginApprovalStatus; // @synthesize loginApprovalStatus=_loginApprovalStatus;
@property(readonly, nonatomic) unsigned long long loginApprovalAction; // @synthesize loginApprovalAction=_loginApprovalAction;
@property(readonly, nonatomic) IGTwoFactorLoginApprovalModel *loginApprovalModel; // @synthesize loginApprovalModel=_loginApprovalModel;
- (id)initWithLoginApprovalModel:(id)arg1 loginApprovalAction:(unsigned long long)arg2 loginApprovalStatus:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

