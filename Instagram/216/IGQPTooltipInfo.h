//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGQPTooltipAnchorID, NSNumber, UIView;

@interface IGQPTooltipInfo : NSObject
{
    _Bool _shouldTrackContainerView;
    IGQPTooltipAnchorID *_anchorID;
    UIView *_containerView;
    UIView *_attachmentView;
    NSNumber *_padding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSNumber *padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) __weak UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(readonly, nonatomic) _Bool shouldTrackContainerView; // @synthesize shouldTrackContainerView=_shouldTrackContainerView;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, copy, nonatomic) IGQPTooltipAnchorID *anchorID; // @synthesize anchorID=_anchorID;
- (id)initWithAnchorID:(id)arg1 containerView:(id)arg2 shouldTrackContainerView:(_Bool)arg3 attachmentView:(id)arg4 padding:(id)arg5;

@end

