//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString, SNAnimationDocumentMetadataModel;

@interface SNAnimationDocumentModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_name;
    NSString *_document;
    NSArray *_assetSources;
    NSArray *_states;
    SNAnimationDocumentMetadataModel *_metadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SNAnimationDocumentMetadataModel *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *states; // @synthesize states=_states;
@property(readonly, copy, nonatomic) NSArray *assetSources; // @synthesize assetSources=_assetSources;
@property(readonly, copy, nonatomic) NSString *document; // @synthesize document=_document;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 document:(id)arg2 assetSources:(id)arg3 states:(id)arg4 metadata:(id)arg5;

@end
