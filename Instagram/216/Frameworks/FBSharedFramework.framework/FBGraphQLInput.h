//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface FBGraphQLInput : NSObject <NSCopying>
{
    NSMutableDictionary *_propertyValues;
}

+ (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isKeyedFileProperty:(id)arg1;
- (id)rawDataToUpload;
- (id)toDictionary;
- (id)JSONString;
- (id)init;

@end

