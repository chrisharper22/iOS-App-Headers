//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;

@protocol MKAnnotation <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@end

