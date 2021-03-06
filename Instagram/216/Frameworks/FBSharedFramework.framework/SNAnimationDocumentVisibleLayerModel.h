//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface SNAnimationDocumentVisibleLayerModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_tag;
    NSString *_name;
    NSString *_type;
    NSString *_bitmapName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bitmapName; // @synthesize bitmapName=_bitmapName;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (id)initWithTag:(id)arg1 name:(id)arg2 type:(id)arg3 bitmapName:(id)arg4;

@end

