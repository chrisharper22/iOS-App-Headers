//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGReportingPage-Protocol.h"

@class IGBasicListViewController, IGBottomButtonsView, IGReportingComponentPolicyEducationView, IGReportingController, IGReportingSelectVictimConfirmViewModel, IGReportingSelectVictimSearchDataSource, IGUserSession, NSString, UILabel;
@protocol IGReportingPageDelegate;

@interface IGReportingSelectVictimConfirmViewController : IGViewController <IGReportingPage>
{
    IGUserSession *_userSession;
    IGReportingController *_reportingController;
    IGReportingSelectVictimConfirmViewModel *_viewModel;
    UILabel *_subtitleLabel;
    IGReportingComponentPolicyEducationView *_policyEducationView;
    IGBottomButtonsView *_buttonsView;
    IGBasicListViewController *_listViewController;
    IGReportingSelectVictimSearchDataSource *_dataSource;
    _Bool _userInteractionEnabled;
    id <IGReportingPageDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGReportingPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
- (id)_buttonsViewForActionViewModels:(id)arg1;
- (_Bool)_shouldShowFeedback;
- (void)configureWithSelectVictimConfirmViewModel:(id)arg1;
- (id)_paragraphTextForReport:(unsigned long long)arg1;
- (id)_paragraphTextForFeedback:(unsigned long long)arg1;
- (id)_subtitleTextForReport:(unsigned long long)arg1;
- (id)_subtitleTextForFeedback:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 reportingController:(id)arg2 performanceListener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

