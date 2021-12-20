//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapView, UIView;
@protocol FBMapAnnotation, FBMapAnnotationManager, FBMapView, IGDiscoveryMapMapControllerDelegate;

@interface IGDiscoveryMapMapController : NSObject
{
    UIView<FBMapView> *_fbMapView;
    id <FBMapAnnotationManager> _annotationManager;
    MKMapView *_mapView;
    id <IGDiscoveryMapMapControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryMapMapControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewForAnnotation:(id)arg1;
- (void)_showAnnotations:(id)arg1 visibleMapInsets:(struct UIEdgeInsets)arg2;
- (void)_fbShowAnnotations:(id)arg1 visibleMapInsets:(struct UIEdgeInsets)arg2;
- (void)_setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (struct CLLocationCoordinate2D)_convertPointToCoordinateFromView:(struct CGPoint)arg1;
- (struct CGPoint)_convertCoordinateToPointToView:(struct CLLocationCoordinate2D)arg1;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 visibleMapInsets:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)moveMapToRevealAnnotation:(id)arg1 visibleMapInsets:(struct UIEdgeInsets)arg2 selectedAnnotationSize:(struct CGSize)arg3 animated:(_Bool)arg4;
- (void)showAnnotations:(id)arg1 visibleMapInsets:(struct UIEdgeInsets)arg2;
- (void)deselectAllAnnotations;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) id <FBMapAnnotation> selectedAnnotation;
@property(readonly, nonatomic) MKMapView *mapView;
@property(readonly, nonatomic) id <FBMapAnnotationManager> annotationManager;
@property(readonly, nonatomic) UIView<FBMapView> *fbMapView;
- (id)initWithMapView:(id)arg1;
- (id)initWithFBMapView:(id)arg1 annotationManager:(id)arg2;

@end

