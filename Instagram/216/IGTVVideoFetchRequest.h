//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTVVideoFetchRequestState, PHAsset;
@protocol IGTVVideoFetchRequestDelegate;

@interface IGTVVideoFetchRequest : NSObject
{
    int _requestID;
    id <IGTVVideoFetchRequestDelegate> _delegate;
    PHAsset *_asset;
    IGTVVideoFetchRequestState *_state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVVideoFetchRequestState *state; // @synthesize state=_state;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <IGTVVideoFetchRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isFetchAllowed;
- (void)fetch;
- (void)dealloc;
- (id)initWithPhotoLibraryAsset:(id)arg1;

@end

