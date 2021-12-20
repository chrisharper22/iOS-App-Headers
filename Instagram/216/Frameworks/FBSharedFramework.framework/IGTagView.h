//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/CAAnimationDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGALButton, IGTag, IGTapButton, NSString, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol IGTagViewDelegate;

@interface IGTagView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    UIView *_expandedView;
    UIImageView *_leftBGView;
    UIImageView *_rightBGView;
    double _caretPosition;
    _Bool _shouldRemoveAfterAnimation;
    UIPanGestureRecognizer *_panRecognizer;
    struct CGPoint _panGestureInitialCenter;
    struct CGPoint _panGestureInitialLocation;
    UIView *_innerContentView;
    NSString *_editingAccessibilityHint;
    _Bool _expanded;
    _Bool _isMoving;
    _Bool _flipped;
    _Bool _isEditable;
    _Bool _isExpandable;
    _Bool _isActive;
    IGTag *_objectTag;
    id <IGTagViewDelegate> _delegate;
    IGALButton *_contentView;
    UILongPressGestureRecognizer *_pressRecognizer;
    IGTapButton *_removeButton;
    unsigned long long _colorTheme;
    double _proposedCaretPosition;
    struct CGPoint _position;
}

- (void).cxx_destruct;
@property(nonatomic) double proposedCaretPosition; // @synthesize proposedCaretPosition=_proposedCaretPosition;
@property(nonatomic) double caretPosition; // @synthesize caretPosition=_caretPosition;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isExpandable; // @synthesize isExpandable=_isExpandable;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) unsigned long long colorTheme; // @synthesize colorTheme=_colorTheme;
@property(readonly, nonatomic) IGTapButton *removeButton; // @synthesize removeButton=_removeButton;
@property(readonly, nonatomic) UILongPressGestureRecognizer *pressRecognizer; // @synthesize pressRecognizer=_pressRecognizer;
@property(readonly, nonatomic) IGALButton *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <IGTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) IGTag *objectTag; // @synthesize objectTag=_objectTag;
- (id)accessibilityHint;
- (_Bool)accessibilityActivate;
- (void)repositionWithCaretAtPosition:(double)arg1;
- (void)shrink:(_Bool)arg1 animated:(_Bool)arg2;
- (void)show:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateBackgroundImages;
- (void)_onDragExit;
- (void)_onTouchDown;
- (void)_onTap;
- (void)setObjectTag:(id)arg1;
- (void)_onRemove;
- (void)_removeAndNotifyDelegate:(_Bool)arg1;
- (void)remove;
- (double)_currentWidth;
- (void)_hideAndRemove;
- (void)_scaleUp;
- (struct CGPoint)_caretPointWithCenter:(struct CGPoint)arg1;
- (void)_handlePanFromRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didMoveToSuperview;
- (void)reposition;
- (struct CGRect)proposedFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)tagViewType;
- (id)initWithObjectTag:(id)arg1 innerContentView:(id)arg2 accessibilityLabel:(id)arg3 editingAccessibilityHint:(id)arg4 colorTheme:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

