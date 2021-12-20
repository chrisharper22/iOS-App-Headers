//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSerializable-Protocol.h"

@class IGAsyncTask, NSString;

@interface IGSundialReferenceVideo : NSObject <IGSerializable>
{
    IGAsyncTask *_video;
    IGAsyncTask *_previewImage;
    NSString *_originalMediaID;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *originalMediaID; // @synthesize originalMediaID=_originalMediaID;
@property(readonly, nonatomic) IGAsyncTask *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) IGAsyncTask *video; // @synthesize video=_video;
- (id)initWithVideo:(id)arg1 previewImage:(id)arg2 originalMediaID:(id)arg3;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
