//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGShoppingSearchProductListResultViewModel : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
- (id)initWithCollectionResultViewModel:(id)arg1;
- (id)_initWithProductItem:(id)arg1 moduleName:(id)arg2 metadata:(id)arg3 filterQuery:(id)arg4 variantDescription:(id)arg5 decorator:(id)arg6 isRowTappable:(_Bool)arg7 userSession:(id)arg8;
- (id)initWithtItemResultViewModel:(id)arg1 userSession:(id)arg2;
- (id)initWithGroupResultViewModel:(id)arg1 userSession:(id)arg2;

@end

