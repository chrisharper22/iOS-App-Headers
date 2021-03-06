//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFDashSelectionMetadata;
@protocol FNFDashRepresentable;

@interface FNFDashQualitySelection : NSObject
{
    id <FNFDashRepresentable> _selectedRepresentation;
    FNFDashSelectionMetadata *_selectionMetadata;
    long long _trackType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long trackType; // @synthesize trackType=_trackType;
@property(readonly, nonatomic) FNFDashSelectionMetadata *selectionMetadata; // @synthesize selectionMetadata=_selectionMetadata;
@property(readonly, nonatomic) id <FNFDashRepresentable> selectedRepresentation; // @synthesize selectedRepresentation=_selectedRepresentation;
- (id)initWithSelectedRepresentation:(id)arg1 qualityMetadata:(id)arg2 trackType:(long long)arg3;
- (id)initWithSelectedRepresentation:(id)arg1 trackType:(long long)arg2;

@end

