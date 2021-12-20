//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGReportingComponentFollowupViewModel, IGReportingConfirmationViewModel, IGReportingEscalationRequestViewModel, IGReportingPolicyEducationViewModel, IGReportingProcessEducationViewModel, IGReportingSelectVictimConfirmViewModel, IGReportingSelectVictimViewModel, IGReportingTagsViewModel, IGReportingWebViewModel;

@interface IGReportingViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGReportingTagsViewModel *_tagsViewModel_tagsViewModel;
    IGReportingConfirmationViewModel *_confirmationViewModel_confirmationViewModel;
    IGReportingPolicyEducationViewModel *_policyEducationViewModel_policyEducationViewModel;
    IGReportingSelectVictimViewModel *_selectVictimViewModel_selectVictimViewModel;
    IGReportingProcessEducationViewModel *_processEducationViewModel_processEducationViewModel;
    IGReportingWebViewModel *_webViewModel_webViewModel;
    IGReportingComponentFollowupViewModel *_followupViewModel_followupViewModel;
    IGReportingEscalationRequestViewModel *_escalationRequestViewModel_escalationRequestViewModel;
    IGReportingSelectVictimConfirmViewModel *_selectVictimConfirmViewModel_selectVictimConfirmViewModel;
}

+ (id)webViewModelWithWebViewModel:(id)arg1;
+ (id)tagsViewModelWithTagsViewModel:(id)arg1;
+ (id)selectVictimViewModelWithSelectVictimViewModel:(id)arg1;
+ (id)selectVictimConfirmViewModelWithSelectVictimConfirmViewModel:(id)arg1;
+ (id)processEducationViewModelWithProcessEducationViewModel:(id)arg1;
+ (id)policyEducationViewModelWithPolicyEducationViewModel:(id)arg1;
+ (id)followupViewModelWithFollowupViewModel:(id)arg1;
+ (id)escalationRequestViewModelWithEscalationRequestViewModel:(id)arg1;
+ (id)confirmationViewModelWithConfirmationViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchTagsViewModel:(CDUnknownBlockType)arg1 confirmationViewModel:(CDUnknownBlockType)arg2 policyEducationViewModel:(CDUnknownBlockType)arg3 selectVictimViewModel:(CDUnknownBlockType)arg4 processEducationViewModel:(CDUnknownBlockType)arg5 webViewModel:(CDUnknownBlockType)arg6 followupViewModel:(CDUnknownBlockType)arg7 escalationRequestViewModel:(CDUnknownBlockType)arg8 selectVictimConfirmViewModel:(CDUnknownBlockType)arg9;

@end
