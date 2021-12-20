//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMapClusterAnnotation, NSArray, UIView;
@protocol FBMapAnnotation, FBMapAnnotationManager, FBMapAnnotationViewType, FBMapOverlay, FBMapOverlayRenderer;

@protocol FBMapAnnotationManagerDelegate <NSObject>
- (void)annotationManager:(id <FBMapAnnotationManager>)arg1 didAddOverlayRenderers:(NSArray *)arg2;
- (id <FBMapOverlayRenderer>)annotationManager:(id <FBMapAnnotationManager>)arg1 rendererForOverlay:(id <FBMapOverlay>)arg2;
- (void)annotationManager:(id <FBMapAnnotationManager>)arg1 didDeselectAnnotationView:(UIView<FBMapAnnotationViewType> *)arg2;
- (void)annotationManager:(id <FBMapAnnotationManager>)arg1 didSelectAnnotationView:(UIView<FBMapAnnotationViewType> *)arg2;
- (void)annotationManager:(id <FBMapAnnotationManager>)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (FBMapClusterAnnotation *)annotationManager:(id <FBMapAnnotationManager>)arg1 clusterAnnotationForMemberAnnotations:(NSArray *)arg2;
- (UIView<FBMapAnnotationViewType> *)annotationManager:(id <FBMapAnnotationManager>)arg1 viewForAnnotation:(id <FBMapAnnotation>)arg2;
@end

