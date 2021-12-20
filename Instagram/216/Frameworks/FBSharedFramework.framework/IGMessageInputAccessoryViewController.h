//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGDirectSuggestedTextNetworkDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGSuggestedTextSelectionInputAccessoryViewLoggingDelegate-Protocol.h>

@class IGDirectSuggestedTextNetworkDataSource, IGMedia, IGSuggestedRepliesExperimentationConfig, IGSuggestedTextSelectionInputAccessoryView, IGUserSession, NSString;

@interface IGMessageInputAccessoryViewController : IGViewController <IGDirectSuggestedTextNetworkDataSourceDelegate, IGSuggestedTextSelectionInputAccessoryViewLoggingDelegate>
{
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    IGSuggestedRepliesExperimentationConfig *_suggestedRepliesExperimentationConfig;
    IGDirectSuggestedTextNetworkDataSource *_suggestedTextNetworkDataSource;
    IGSuggestedTextSelectionInputAccessoryView *_suggestedTextSelectionInputAccessoryView;
    IGMedia *_media;
    NSString *_mlSessionId;
    NSString *_sharesheetSessionId;
    _Bool _didReceiveSucessfulTextSuggestionsResponse;
}

- (void).cxx_destruct;
- (void)suggestedTextDataSourceDidFailLoad:(id)arg1 error:(id)arg2;
- (void)suggestedTextDataSourceDidFinishLoading:(id)arg1;
- (void)suggestedTextDataSourceDidStartLoading:(id)arg1;
- (void)suggestedTextSelectionInputAccessoryView:(id)arg1 itemDidBecomeVisible:(id)arg2 suggestionType:(id)arg3 atIndex:(long long)arg4;
- (void)suggestedTextSelectionInputAccessoryView:(id)arg1 didSelectItem:(id)arg2 suggestionType:(id)arg3 atIndex:(long long)arg4;
- (id)_suggestionCategoryIdForSuggestedTextHScrollViewItem:(id)arg1;
- (_Bool)_shouldShowTextPicker;
- (_Bool)didReceiveSucessfulTextSuggestionsResponse;
- (id)messageInputAccessoryView;
- (id)initWithAnalyticsModule:(id)arg1 userSession:(id)arg2 media:(id)arg3 sharesheetSessionId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
