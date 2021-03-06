//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGLocation, IGLocationPaginationModel, NSString;

@interface IGLocationNetworkerRequestConfig : NSObject
{
    IGLocation *_location;
    long long _fetchAction;
    unsigned long long _behavior;
    long long _surface;
    long long _locationMainFeedType;
    NSString *_fbPlaceID;
    IGLocationPaginationModel *_paginationModel;
    NSString *_maxID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, copy, nonatomic) IGLocationPaginationModel *paginationModel; // @synthesize paginationModel=_paginationModel;
@property(readonly, copy, nonatomic) NSString *fbPlaceID; // @synthesize fbPlaceID=_fbPlaceID;
@property(readonly, nonatomic) long long locationMainFeedType; // @synthesize locationMainFeedType=_locationMainFeedType;
@property(readonly, nonatomic) long long surface; // @synthesize surface=_surface;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) long long fetchAction; // @synthesize fetchAction=_fetchAction;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
- (id)generateRequestParameters;
- (id)initWithLocation:(id)arg1 fetchAction:(long long)arg2 mainFeedType:(long long)arg3 surface:(long long)arg4 requestBehavior:(unsigned long long)arg5 facebookPlaceID:(id)arg6 paginationModel:(id)arg7 maxID:(id)arg8;

@end

