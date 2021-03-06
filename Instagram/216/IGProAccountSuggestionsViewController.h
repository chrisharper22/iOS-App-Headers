//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGEmbeddedListViewControllerDelegate-Protocol.h"
#import "IGFullWidthEntityRecommendationSectionControllerDelegate-Protocol.h"

@class IG4BLogger, IGEmbeddedListViewController, IGHeadlineView, IGProAccountSuggestionsNetworker, IGProAccountSuggestionsViewControllerConfiguration, IGUserSession, NSArray, NSString, UIActivityIndicatorView;
@protocol IGProAccountSuggestionsViewControllerDelegate;

@interface IGProAccountSuggestionsViewController : IGViewController <IGEmbeddedListViewControllerDelegate, IGFullWidthEntityRecommendationSectionControllerDelegate>
{
    IGHeadlineView *_headlineView;
    IGUserSession *_userSession;
    IGEmbeddedListViewController *_embeddedListViewController;
    UIActivityIndicatorView *_emptyView;
    IG4BLogger *_logger;
    IGProAccountSuggestionsViewControllerConfiguration *_config;
    NSArray *_loadedObjects;
    _Bool _finishedInitialFetch;
    _Bool _noMoreResults;
    _Bool _allowScrollMore;
    _Bool _ignoreCancelEventLogging;
    _Bool _isStepComplete;
    id <IGProAccountSuggestionsViewControllerDelegate> _proAccountSuggestionsDelegate;
    IGProAccountSuggestionsNetworker *_proAccountSuggestionsNetworker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGProAccountSuggestionsNetworker *proAccountSuggestionsNetworker; // @synthesize proAccountSuggestionsNetworker=_proAccountSuggestionsNetworker;
@property(nonatomic) _Bool isStepComplete; // @synthesize isStepComplete=_isStepComplete;
@property(nonatomic) __weak id <IGProAccountSuggestionsViewControllerDelegate> proAccountSuggestionsDelegate; // @synthesize proAccountSuggestionsDelegate=_proAccountSuggestionsDelegate;
@property(nonatomic) _Bool ignoreCancelEventLogging; // @synthesize ignoreCancelEventLogging=_ignoreCancelEventLogging;
- (void)_logSubmitErrorFromError:(id)arg1;
- (void)_logSubmit;
- (void)_logContinueTapComponent;
- (void)_logCancel;
- (void)_handleManuallySetProAccountSuggestionsCompletedWithError:(id)arg1;
- (void)_manuallySetProAccountSuggestionsCompleted;
- (void)_handleProAccountSuggestionsNetworkerCompletionWithViewModels:(id)arg1 error:(id)arg2;
- (void)embeddedListViewController:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)embeddedListViewController:(id)arg1 scrollReachedEnd:(id)arg2;
- (id)embeddedListViewController:(id)arg1 sectionControllerForViewModel:(id)arg2;
- (void)fullWidthEntityRecommendationSectionController:(id)arg1 didTapFollowButton:(id)arg2;
- (void)fullWidthEntityRecommendationSectionController:(id)arg1 didNavigateToEntityPageForViewModel:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_setupEmbeddedListViewController;
- (void)_handleCancelTap;
- (void)_setupNavigation;
- (void)_setupHeaderView;
- (id)initWithUserSession:(id)arg1 config:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

