//
// unittest_mset.pb.h
// 
// Generated by the objc protocol buffer compiler plugin.  DO NOT EDIT!
// source: google/protobuf/unittest_mset.proto
//

#import <Foundation/Foundation.h>

#import <ProtocolModels/ProtocolModels.h>

// @@protoc_insertion_point(imports)

@class RawMessageSet;
@class RawMessageSet_Builder;
@class RawMessageSet_Item;
@class RawMessageSet_Item_Builder;
@class TestMessageSet;
@class TestMessageSetContainer;
@class TestMessageSetContainer_Builder;
@class TestMessageSetExtension1;
@class TestMessageSetExtension1_Builder;
@class TestMessageSetExtension2;
@class TestMessageSetExtension2_Builder;
@class TestMessageSet_Builder;

#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface UnittestMsetRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*)registry;
@end


#pragma mark - TestMessageSet

@interface TestMessageSet : PBExtendableMessage




- (TestMessageSet_Builder*)builder;
+ (TestMessageSet_Builder*)builder;
+ (TestMessageSet_Builder*)builderWithPrototype:(TestMessageSet*)prototype;
- (TestMessageSet_Builder*)toBuilder;

@end


@interface TestMessageSet_Builder : PBExtendableMessage_Builder

- (TestMessageSet*)defaultMessageInstance;

- (TestMessageSet*)build;
- (TestMessageSet*)buildPartial;

- (instancetype)mergeFrom:(TestMessageSet*)other;

@end


#pragma mark - TestMessageSetContainer

@interface TestMessageSetContainer : PBGeneratedMessage

@property (readonly, strong)  TestMessageSet* messageSet;

- (BOOL)hasMessageSet;


- (TestMessageSetContainer_Builder*)builder;
+ (TestMessageSetContainer_Builder*)builder;
+ (TestMessageSetContainer_Builder*)builderWithPrototype:(TestMessageSetContainer*)prototype;
- (TestMessageSetContainer_Builder*)toBuilder;

@end


@interface TestMessageSetContainer_Builder : PBGeneratedMessage_Builder

- (TestMessageSetContainer*)defaultMessageInstance;

- (TestMessageSetContainer*)build;
- (TestMessageSetContainer*)buildPartial;

- (instancetype)mergeFrom:(TestMessageSetContainer*)other;

- (BOOL)hasMessageSet;
- (TestMessageSet*)messageSet;
- (instancetype)setMessageSet:(TestMessageSet*)value;
- (instancetype)setMessageSetBuilder:(TestMessageSet_Builder*)builderForValue;
- (instancetype)mergeMessageSet:(TestMessageSet*)value;
- (instancetype)clearMessageSet;

@end


#pragma mark - TestMessageSetExtension1

@interface TestMessageSetExtension1 : PBGeneratedMessage

@property (readonly) int32_t i;

- (BOOL)hasI;


+ (PBExtensionField *)messageSetExtension;

- (TestMessageSetExtension1_Builder*)builder;
+ (TestMessageSetExtension1_Builder*)builder;
+ (TestMessageSetExtension1_Builder*)builderWithPrototype:(TestMessageSetExtension1*)prototype;
- (TestMessageSetExtension1_Builder*)toBuilder;

@end


@interface TestMessageSetExtension1_Builder : PBGeneratedMessage_Builder

- (TestMessageSetExtension1*)defaultMessageInstance;

- (TestMessageSetExtension1*)build;
- (TestMessageSetExtension1*)buildPartial;

- (instancetype)mergeFrom:(TestMessageSetExtension1*)other;

- (BOOL)hasI;
- (int32_t)i;
- (instancetype)setI:(int32_t) value;
- (instancetype)clearI;

@end


#pragma mark - TestMessageSetExtension2

@interface TestMessageSetExtension2 : PBGeneratedMessage

@property (readonly, strong) NSString * str;

- (BOOL)hasStr;


+ (PBExtensionField *)messageSetExtension;

- (TestMessageSetExtension2_Builder*)builder;
+ (TestMessageSetExtension2_Builder*)builder;
+ (TestMessageSetExtension2_Builder*)builderWithPrototype:(TestMessageSetExtension2*)prototype;
- (TestMessageSetExtension2_Builder*)toBuilder;

@end


@interface TestMessageSetExtension2_Builder : PBGeneratedMessage_Builder

- (TestMessageSetExtension2*)defaultMessageInstance;

- (TestMessageSetExtension2*)build;
- (TestMessageSetExtension2*)buildPartial;

- (instancetype)mergeFrom:(TestMessageSetExtension2*)other;

- (BOOL)hasStr;
- (NSString *)str;
- (instancetype)setStr:(NSString *) value;
- (instancetype)clearStr;

@end


#pragma mark - RawMessageSet

@interface RawMessageSet : PBGeneratedMessage

@property (readonly, strong) NSArray *Item;


- (RawMessageSet_Item*)ItemAtIndex:(NSUInteger)index;

- (RawMessageSet_Builder*)builder;
+ (RawMessageSet_Builder*)builder;
+ (RawMessageSet_Builder*)builderWithPrototype:(RawMessageSet*)prototype;
- (RawMessageSet_Builder*)toBuilder;

@end


@interface RawMessageSet_Builder : PBGeneratedMessage_Builder

- (RawMessageSet*)defaultMessageInstance;

- (RawMessageSet*)build;
- (RawMessageSet*)buildPartial;

- (instancetype)mergeFrom:(RawMessageSet*)other;

- (NSMutableArray *)Item;
- (RawMessageSet_Item*)ItemAtIndex:(NSUInteger)index;
- (instancetype)addItem:(RawMessageSet_Item*)value;
- (instancetype)setItemArray:(NSArray *)array;
- (instancetype)clearItem;

@end


#pragma mark - RawMessageSet_Item

@interface RawMessageSet_Item : PBGeneratedMessage

@property (readonly) int32_t typeId;
@property (readonly, strong) NSData * message;

- (BOOL)hasTypeId;
- (BOOL)hasMessage;


- (RawMessageSet_Item_Builder*)builder;
+ (RawMessageSet_Item_Builder*)builder;
+ (RawMessageSet_Item_Builder*)builderWithPrototype:(RawMessageSet_Item*)prototype;
- (RawMessageSet_Item_Builder*)toBuilder;

@end


@interface RawMessageSet_Item_Builder : PBGeneratedMessage_Builder

- (RawMessageSet_Item*)defaultMessageInstance;

- (RawMessageSet_Item*)build;
- (RawMessageSet_Item*)buildPartial;

- (instancetype)mergeFrom:(RawMessageSet_Item*)other;

- (BOOL)hasTypeId;
- (int32_t)typeId;
- (instancetype)setTypeId:(int32_t) value;
- (instancetype)clearTypeId;

- (BOOL)hasMessage;
- (NSData *)message;
- (instancetype)setMessage:(NSData *) value;
- (instancetype)clearMessage;

@end


// @@protoc_insertion_point(global_scope)
