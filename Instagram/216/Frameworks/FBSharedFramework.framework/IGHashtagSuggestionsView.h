//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGHashtagSuggestionsDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/IGSuggestedHashtagSectionControllerDelegate-Protocol.h>

@class FBShimmeringView, IGHashtagSuggestionsDataSource, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView, UILabel;
@protocol IGHashtagSuggestionsViewDelegate;

@interface IGHashtagSuggestionsView : UIView <IGHashtagSuggestionsDataSourceDelegate, IGListAdapterDataSource, IGSuggestedHashtagSectionControllerDelegate>
{
    IGUserSession *_userSession;
    FBShimmeringView *_shimmeringWrapperView;
    UILabel *_suggestionsTitleLabel;
    IGListAdapter *_hashtagListAdapter;
    UICollectionView *_hashtagListView;
    IGHashtagSuggestionsDataSource *_dataSource;
    _Bool _supportChallengesInResults;
    id <IGHashtagSuggestionsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGHashtagSuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long maximumSuggestionCharacterCount;
- (void)didSelectSuggestedHashtagSectionController:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)hashtagSuggestionsDataSource:(id)arg1 didUpdateSuggestedHashtags:(id)arg2;
- (void)hashtagSuggestionsDataSource:(id)arg1 didUpdateLoadingState:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *suggestedHashtags;
@property(copy, nonatomic) NSString *inputHashtag;
@property(copy, nonatomic) NSString *suggestionsTitleText;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMaximumSuggestionCharacterCount:(long long)arg1 userSession:(id)arg2 isChallengesSearch:(_Bool)arg3 supportChallengesInResults:(_Bool)arg4 searchSurfaceType:(long long)arg5;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
