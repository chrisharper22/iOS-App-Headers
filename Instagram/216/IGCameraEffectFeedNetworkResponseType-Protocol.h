//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraEffectGroupPreview, NSArray, NSString;

@protocol IGCameraEffectFeedNetworkResponseType <NSObject>
@property(readonly, nonatomic) _Bool hasNextPage;
@property(readonly, nonatomic) NSString *pageCursor;
@property(readonly, nonatomic) IGCameraEffectGroupPreview *groupPreview;
@property(readonly, nonatomic) NSArray *previews;
@property(readonly, nonatomic) NSArray *creators;
@property(readonly, nonatomic) NSArray *topics;
@end

