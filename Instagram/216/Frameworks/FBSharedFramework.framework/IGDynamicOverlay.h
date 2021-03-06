//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDynamicOverlayModel, IGSurface, UIImage;

@interface IGDynamicOverlay : NSObject
{
    IGDynamicOverlayModel *_dynamicOverlayModel;
    IGSurface *_currentSurface;
    UIImage *_currentImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(readonly, nonatomic) IGSurface *currentSurface; // @synthesize currentSurface=_currentSurface;
@property(readonly, nonatomic) IGDynamicOverlayModel *dynamicOverlayModel; // @synthesize dynamicOverlayModel=_dynamicOverlayModel;
- (union _GLKMatrix4)_overlayTransformForDestinationSurface:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (id)_surfaceForTime:(CDStruct_1b6d18a9)arg1;
- (id)_initWithDynamicOverlayModel:(id)arg1;

@end

