//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCanvasComponentViewability-Protocol.h"
#import "IGCanvasVideoCellDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGListScrollDelegate-Protocol.h"

@class IGCanvasElementLogger, IGCanvasLoggingContext, IGCanvasVideoCell, IGCanvasVideoViewModel, IGCollectionViewVisibility, NSString;

@interface IGCanvasVideoSectionController : IGListSectionController <IGCanvasVideoCellDelegate, IGListDisplayDelegate, IGListScrollDelegate, IGCanvasComponentViewability>
{
    IGCanvasVideoViewModel *_videoViewModel;
    IGCollectionViewVisibility *_collectionVisibility;
    IGCanvasElementLogger *_elementLogger;
    IGCanvasLoggingContext *_loggingContext;
    IGCanvasVideoCell *_currentVideoCell;
    _Bool _audioEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (void)_playVideoCellIfVisible:(id)arg1;
- (id)_visibleCell;
- (_Bool)_is50PercentOrMoreVisible:(id)arg1;
- (double)componentViewabilityNumberOfBlocksSeen:(double)arg1;
- (double)componentViewabilityNumberOfTotalBlocks;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)canvasVideoCellDidSeekToBeginning:(id)arg1;
- (void)canvasVideoCellDidLoadVideo:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (id)displayDelegate;
- (id)scrollDelegate;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)pauseVideo;
- (void)seekToBeginning;
- (void)tearDownVideo;
- (id)initWithCollectionView:(id)arg1 loggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

