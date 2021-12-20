//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMapView.h>

@class CLLocationManager, NSArray, NSTimer, UIView;

@interface RCTMap : MKMapView
{
    UIView *_legalLabel;
    CLLocationManager *_locationManager;
    _Bool _followUserLocation;
    _Bool _hasStartedRendering;
    _Bool _showsAnnotationCallouts;
    double _minDelta;
    double _maxDelta;
    NSTimer *_regionChangeObserveTimer;
    NSArray *_annotationIDs;
    NSArray *_overlayIDs;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onPress;
    CDUnknownBlockType _onAnnotationDragStateChange;
    CDUnknownBlockType _onAnnotationFocus;
    CDUnknownBlockType _onAnnotationBlur;
    struct UIEdgeInsets _legalLabelInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onAnnotationBlur; // @synthesize onAnnotationBlur=_onAnnotationBlur;
@property(copy, nonatomic) CDUnknownBlockType onAnnotationFocus; // @synthesize onAnnotationFocus=_onAnnotationFocus;
@property(copy, nonatomic) CDUnknownBlockType onAnnotationDragStateChange; // @synthesize onAnnotationDragStateChange=_onAnnotationDragStateChange;
@property(copy, nonatomic) CDUnknownBlockType onPress; // @synthesize onPress=_onPress;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) NSArray *overlayIDs; // @synthesize overlayIDs=_overlayIDs;
@property(copy, nonatomic) NSArray *annotationIDs; // @synthesize annotationIDs=_annotationIDs;
@property(retain, nonatomic) NSTimer *regionChangeObserveTimer; // @synthesize regionChangeObserveTimer=_regionChangeObserveTimer;
@property(nonatomic) struct UIEdgeInsets legalLabelInsets; // @synthesize legalLabelInsets=_legalLabelInsets;
@property(nonatomic) double maxDelta; // @synthesize maxDelta=_maxDelta;
@property(nonatomic) double minDelta; // @synthesize minDelta=_minDelta;
@property(nonatomic) _Bool showsAnnotationCallouts; // @synthesize showsAnnotationCallouts=_showsAnnotationCallouts;
@property(nonatomic) _Bool hasStartedRendering; // @synthesize hasStartedRendering=_hasStartedRendering;
@property(nonatomic) _Bool followUserLocation; // @synthesize followUserLocation=_followUserLocation;
- (void)setShowsCompass:(_Bool)arg1;
- (_Bool)showsCompass;
- (void)setOverlays:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setShowsUserLocation:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didUpdateReactSubviews;
- (void)dealloc;
- (id)init;

@end

