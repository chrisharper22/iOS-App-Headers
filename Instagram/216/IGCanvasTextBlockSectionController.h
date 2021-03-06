//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCanvasComponentViewability-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"

@class IGCanvasElementLogger, IGCanvasLoggingContext, IGCanvasTextBlockViewModel, NSString;

@interface IGCanvasTextBlockSectionController : IGListSectionController <IGListDisplayDelegate, IGCanvasComponentViewability>
{
    IGCanvasTextBlockViewModel *_textBlockViewModel;
    IGCanvasElementLogger *_elementLogger;
    IGCanvasLoggingContext *_loggingContext;
}

- (void).cxx_destruct;
- (double)componentViewabilityNumberOfBlocksSeen:(double)arg1;
- (double)componentViewabilityNumberOfTotalBlocks;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithLoggingContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

