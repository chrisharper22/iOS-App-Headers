//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCreateHighlightsViewControllerDelegate-Protocol.h"
#import "IGStorySharePostListener-Protocol.h"

@class IGMedia, IGUserSession, NSArray, NSMutableArray, NSString;

@interface IGAddToHighlightUpsellAfterSharingToStoryManager : NSObject <IGCreateHighlightsViewControllerDelegate, IGStorySharePostListener>
{
    IGUserSession *_userSession;
    NSArray *_storyHighlightMetadataArray;
    NSMutableArray *_selectedHighlightReelTitles;
    IGMedia *_sharedStoryItem;
}

- (void).cxx_destruct;
- (void)_updateNewReelWithTitle:(id)arg1 cropRect:(struct CGRect)arg2 creationToken:(id)arg3 baseUploadID:(id)arg4;
- (void)createHighlightsSheet:(id)arg1 wantsNewReelWithTitle:(id)arg2 cropRect:(struct CGRect)arg3 creationToken:(id)arg4;
- (void)createHighlightsSheetDidCancel:(id)arg1;
- (void)storyItemPosted:(id)arg1 videoFileURL:(id)arg2 shareTypeInt:(long long)arg3 mediaData:(id)arg4 postShareId:(id)arg5 reelOwner:(id)arg6;
- (void)showAddStoryToNewHighlightUpsellAfterStoryPostingWithViewController:(id)arg1 mediaMetadata:(id)arg2 image:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
