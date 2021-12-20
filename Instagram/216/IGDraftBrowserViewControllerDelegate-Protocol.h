//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGComposition, IGDraftBrowserViewController, IGMediaMetadata, IGSundialComposition, NSSet;

@protocol IGDraftBrowserViewControllerDelegate <NSObject>
- (void)draftsBrowserViewController:(IGDraftBrowserViewController *)arg1 didDeleteDrafts:(NSSet *)arg2;
- (void)draftsBrowserViewControllerWantsDismiss:(IGDraftBrowserViewController *)arg1;
- (void)draftsBrowserViewController:(IGDraftBrowserViewController *)arg1 didSelectCompositionDraft:(IGComposition *)arg2;
- (void)draftsBrowserViewController:(IGDraftBrowserViewController *)arg1 didSelectSundialCompositionDraft:(IGSundialComposition *)arg2;
- (void)draftsBrowserViewController:(IGDraftBrowserViewController *)arg1 didSelectMediaDraft:(IGMediaMetadata *)arg2;
@end

