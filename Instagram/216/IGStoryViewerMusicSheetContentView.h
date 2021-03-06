//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGAudioExplicitLabel, IGStoryViewerBottomSheetIconAndLabelView, IGStoryViewerMusicSheetArtistButton, IGStoryViewerMusicSheetPlaybackControlsView, IGStoryViewerMusicSheetSongArtButton, IGStoryViewerMusicSheetTopClipsView;
@protocol IGStoryViewerMusicSheetContentViewDelegate;

@interface IGStoryViewerMusicSheetContentView : UIView
{
    IGStoryViewerBottomSheetIconAndLabelView *_createClipsView;
    IGStoryViewerBottomSheetIconAndLabelView *_bookmarkButton;
    IGStoryViewerBottomSheetIconAndLabelView *_sendToButton;
    _Bool _shouldShowCreateClips;
    _Bool _shouldShowTopClips;
    _Bool _shouldShowSendToButton;
    _Bool _shouldShowBookmarkButton;
    _Bool _bookmarkButtonSelected;
    id <IGStoryViewerMusicSheetContentViewDelegate> _delegate;
    IGStoryViewerMusicSheetSongArtButton *_songArtButton;
    IGAudioExplicitLabel *_titleView;
    IGStoryViewerMusicSheetPlaybackControlsView *_playbackControlsView;
    IGStoryViewerMusicSheetArtistButton *_artistView;
    IGStoryViewerMusicSheetTopClipsView *_topClipsView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bookmarkButtonSelected; // @synthesize bookmarkButtonSelected=_bookmarkButtonSelected;
@property(nonatomic) _Bool shouldShowBookmarkButton; // @synthesize shouldShowBookmarkButton=_shouldShowBookmarkButton;
@property(nonatomic) _Bool shouldShowSendToButton; // @synthesize shouldShowSendToButton=_shouldShowSendToButton;
@property(nonatomic) _Bool shouldShowTopClips; // @synthesize shouldShowTopClips=_shouldShowTopClips;
@property(nonatomic) _Bool shouldShowCreateClips; // @synthesize shouldShowCreateClips=_shouldShowCreateClips;
@property(readonly, nonatomic) IGStoryViewerMusicSheetTopClipsView *topClipsView; // @synthesize topClipsView=_topClipsView;
@property(readonly, nonatomic) IGStoryViewerMusicSheetArtistButton *artistView; // @synthesize artistView=_artistView;
@property(readonly, nonatomic) IGStoryViewerMusicSheetPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) IGAudioExplicitLabel *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) IGStoryViewerMusicSheetSongArtButton *songArtButton; // @synthesize songArtButton=_songArtButton;
@property(nonatomic) __weak id <IGStoryViewerMusicSheetContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapSendToButton:(id)arg1;
- (void)_didTapBookmarkButton:(id)arg1;
- (void)_didTapTopClipsButton:(id)arg1;
- (void)_didTapCreateClipsButton:(id)arg1;
- (void)_didTapArtistProfileButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

