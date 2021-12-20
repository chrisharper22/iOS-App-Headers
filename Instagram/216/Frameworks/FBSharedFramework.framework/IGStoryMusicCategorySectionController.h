//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSectionController.h>

#import <FBSharedFramework/IGListBindingSectionControllerDataSource-Protocol.h>
#import <FBSharedFramework/IGListBindingSectionControllerSelectionDelegate-Protocol.h>
#import <FBSharedFramework/IGListDisplayDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMusicModelsListViewControllerDelegate-Protocol.h>

@class IGAsyncTask, IGStoryMusicGenre, IGUserSession, NSArray, NSString;
@protocol IGAudioBrowserLogger, IGStoryMusicCategorySectionControllerDelegate;

@interface IGStoryMusicCategorySectionController : IGListBindingSectionController <IGListDisplayDelegate, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate, IGStoryMusicModelsListViewControllerDelegate>
{
    IGUserSession *_userSession;
    id <IGAudioBrowserLogger> _logger;
    IGStoryMusicGenre *_genre;
    IGAsyncTask *_tracksForGenreRequest;
    id <IGStoryMusicCategorySectionControllerDelegate> _delegate;
    unsigned long long _selectionStyle;
    NSArray *_selectedTracks;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(retain, nonatomic) NSArray *selectedTracks; // @synthesize selectedTracks=_selectedTracks;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) __weak id <IGStoryMusicCategorySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)musicModelsPaginatedListDidUpdateModels:(id)arg1;
- (void)modelsListViewControllerDidTapClearAllForRecentSearches:(id)arg1;
- (void)modelsListViewController:(id)arg1 didTapArtist:(id)arg2 category:(unsigned long long)arg3;
- (void)modelsListViewController:(id)arg1 didTapAudioPageForAudioTrack:(id)arg2 pivotPageSessionId:(id)arg3;
- (void)modelsListViewController:(id)arg1 didTapAudioTrack:(id)arg2 context:(CDStruct_61bbf500)arg3 category_DEPRECATED:(unsigned long long)arg4;
- (void)sectionController:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didHighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didDeselectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didSelectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

