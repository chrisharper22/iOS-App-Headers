//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCommentCellDelegate-Protocol.h"

@class IGCommentCell, NSString;

@interface IGCommentCellRevealManager : NSObject <IGCommentCellDelegate>
{
    IGCommentCell *_openCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGCommentCell *openCell; // @synthesize openCell=_openCell;
- (void)didCompleteActionForCommentCell:(id)arg1;
- (void)didHideActionsForCommentCell:(id)arg1;
- (void)didShowActionsForCommentCell:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

