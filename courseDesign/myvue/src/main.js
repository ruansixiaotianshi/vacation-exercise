import Vue from 'vue'
import './plugins/axios'
import App from './App.vue'
import router from './router'
import store from './store'
import './plugins/element.js'

import 'mint-ui/lib/style.css'

// Vue.config.productionTip = false
// Vue.prototype.$axios = axios
// axios.defaults.baseURL = '/api'  //关键代码F
// Vue.config.productionTip = false

new Vue({
  router,
  store,
  render: h => h(App)
}).$mount('#app')
