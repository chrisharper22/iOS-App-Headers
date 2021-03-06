//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLayoutElement-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView;
@protocol IGSundialPictureInPictureLayoutDelegate;

@interface IGSundialPictureInPictureLayout : NSObject <IGLayoutElement>
{
    struct UIOffset _pipViewOffset;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _panStartOrigin;
    _Bool _hiddenFromLayout;
    UIView *_pipView;
    id <IGSundialPictureInPictureLayoutDelegate> _delegate;
    long long _pipViewPosition;
    struct CGSize _pipViewSize;
    struct CGRect _layoutFrame;
    struct UIEdgeInsets _pipViewInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets pipViewInset; // @synthesize pipViewInset=_pipViewInset;
@property(nonatomic) long long pipViewPosition; // @synthesize pipViewPosition=_pipViewPosition;
@property(nonatomic) struct CGSize pipViewSize; // @synthesize pipViewSize=_pipViewSize;
@property(nonatomic) __weak id <IGSundialPictureInPictureLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *pipView; // @synthesize pipView=_pipView;
@property(nonatomic) _Bool hiddenFromLayout; // @synthesize hiddenFromLayout=_hiddenFromLayout;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
- (void)_handlePanGestureEnded:(id)arg1;
- (void)_handlePanGestureChanged:(id)arg1;
- (void)_handlePanGestureBegan:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (id)subelements;
- (struct CGPoint)_originForPosition:(long long)arg1;
- (void)layoutSubelements;
- (struct CGSize)layoutSizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithPiPView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

