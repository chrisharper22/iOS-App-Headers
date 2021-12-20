//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryViewerBottomSheetIconAndLabelView, IGStoryViewerMusicSheetArtistButton, IGStoryViewerMusicSheetContentView, IGStoryViewerMusicSheetTopClipsView;

@protocol IGStoryViewerMusicSheetContentViewDelegate <NSObject>
- (void)musicSheetContentView:(IGStoryViewerMusicSheetContentView *)arg1 didTapSendToButton:(IGStoryViewerBottomSheetIconAndLabelView *)arg2;
- (void)musicSheetContentView:(IGStoryViewerMusicSheetContentView *)arg1 didTapBookmarkButton:(IGStoryViewerBottomSheetIconAndLabelView *)arg2 shouldBookmark:(_Bool)arg3;
- (void)musicSheetContentView:(IGStoryViewerMusicSheetContentView *)arg1 didTapTopClipsView:(IGStoryViewerMusicSheetTopClipsView *)arg2;
- (void)musicSheetContentView:(IGStoryViewerMusicSheetContentView *)arg1 didTapCreateClipsView:(IGStoryViewerBottomSheetIconAndLabelView *)arg2;
- (void)musicSheetContentView:(IGStoryViewerMusicSheetContentView *)arg1 didTapArtistView:(IGStoryViewerMusicSheetArtistButton *)arg2;
@end
