//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTVCardVideoHeaderAccessory, IGTVCardVideoMetadataViewModel;

@interface IGCreationFlowThumbnailViewModel : NSObject
{
    IGTVCardVideoHeaderAccessory *_header;
    IGTVCardVideoMetadataViewModel *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVCardVideoMetadataViewModel *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) IGTVCardVideoHeaderAccessory *header; // @synthesize header=_header;
- (id)initWithHeader:(id)arg1 metadata:(id)arg2;

@end

