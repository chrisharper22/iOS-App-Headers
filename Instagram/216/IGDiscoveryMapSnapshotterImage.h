//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface IGDiscoveryMapSnapshotterImage : NSObject
{
    UIImage *_image;
    struct CLLocationCoordinate2D _coordinate;
    struct CGPoint _offset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 offset:(struct CGPoint)arg3;

@end

