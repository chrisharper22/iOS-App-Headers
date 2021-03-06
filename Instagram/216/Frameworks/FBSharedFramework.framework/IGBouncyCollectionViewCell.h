//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGTouchDetectorDelegate-Protocol.h>

@class IGTouchDetector, NSHashTable, NSString;

@interface IGBouncyCollectionViewCell : UICollectionViewCell <IGTouchDetectorDelegate>
{
    IGTouchDetector *_touchDetector;
    NSHashTable *_blockingGesturesSet;
    _Bool _pushedDown;
    double _pushedDownScale;
}

- (void).cxx_destruct;
@property(nonatomic) double pushedDownScale; // @synthesize pushedDownScale=_pushedDownScale;
- (void)setPushedDown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_blockingGestureDidRecognize:(id)arg1;
- (void)_recomputeBlockingGestures;
- (void)_clearBlockingGestures;
- (void)touchDetector:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

