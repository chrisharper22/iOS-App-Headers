//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGalleryFrameSetter-Protocol.h"

@class IGGalleryAttributesStore, NSString;

@interface IGGalleryDownwardFrameSetter : NSObject <IGGalleryFrameSetter>
{
    IGGalleryAttributesStore *_attributesStore;
    struct CGRect _bounds;
    struct vector<IGGallerySectionLayout, std::allocator<IGGallerySectionLayout>> _layoutStore;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)computeLayout;
@property(readonly, nonatomic) void *layoutStore;
- (id)initWithBounds:(struct CGRect)arg1 attributesStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

