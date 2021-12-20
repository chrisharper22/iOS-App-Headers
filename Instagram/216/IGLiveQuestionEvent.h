//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "IGLiveInteractivityEvent-Protocol.h"

@class IGLiveQuestionModel, NSString;

@interface IGLiveQuestionEvent : FBIvarBasedEqualityObject <IGLiveInteractivityEvent>
{
    unsigned long long _subtype;
    IGLiveQuestionModel *_activation_question;
    NSString *_deactivation_questionPk;
    double _deactivation_timestamp;
}

+ (id)deactivationWithQuestionPk:(id)arg1 timestamp:(double)arg2;
+ (id)activationWithQuestion:(id)arg1;
- (void).cxx_destruct;
- (void)matchActivation:(CDUnknownBlockType)arg1 deactivation:(CDUnknownBlockType)arg2;
- (id)questionPk;
- (double)timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
