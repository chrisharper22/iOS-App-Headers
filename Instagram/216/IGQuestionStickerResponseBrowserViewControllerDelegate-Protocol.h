//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGQuestionAnswerStickerResponder, IGQuestionStickerResponseBrowserViewController;

@protocol IGQuestionStickerResponseBrowserViewControllerDelegate <NSObject>
- (void)questionStickerResponseBrowser:(IGQuestionStickerResponseBrowserViewController *)arg1 didDeleteResponse:(IGQuestionAnswerStickerResponder *)arg2;
- (void)questionStickerResponseBrowserDidTapSeeAllButton:(IGQuestionStickerResponseBrowserViewController *)arg1;
- (void)questionStickerResponseBrowser:(IGQuestionStickerResponseBrowserViewController *)arg1 didScrollToResponseAtIndex:(long long)arg2;
@end

