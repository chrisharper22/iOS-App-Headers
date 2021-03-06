//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMarkerAnnotationView.h>

#import "FBMapAnnotationViewType-Protocol.h"

@class NSString, UIView;
@protocol FBMapAnnotation, FBMapAnnotationViewType;

@interface FBMapMarkerAnnotationView : MKMarkerAnnotationView <FBMapAnnotationViewType>
{
}

@property(readonly, nonatomic) __weak UIView<FBMapAnnotationViewType> *fbClusterAnnotationView;
@property(readonly, nonatomic) id <FBMapAnnotation> fbAnnotation;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *clusteringIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

