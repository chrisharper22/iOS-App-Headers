//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGUnlockableStickerInfoStickerThumbnailImage : FBValueObject <NSCopying, NSCoding>
{
    NSString *_uri;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUri:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
