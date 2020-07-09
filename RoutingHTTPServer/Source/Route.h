#import <Foundation/Foundation.h>
#import <RoutingHTTPServer/RoutingHTTPServer.h>

@interface Route : NSObject

@property (nonatomic, assign) NSRegularExpression *regex;
@property (nonatomic, copy) RequestHandler handler;

#if __has_feature(objc_arc_weak)
@property (nonatomic, weak) id target;
#else
@property (nonatomic, assign) id target;
#endif

@property (nonatomic, assign) SEL selector;
@property (nonatomic, assign) NSArray *keys;

@end
